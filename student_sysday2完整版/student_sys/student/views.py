from django.http import HttpResponseRedirect
from django.shortcuts import render,redirect
from .models import Student,Users

from django.urls import reverse
from .forms import StudentForm

from functools import wraps

def check_login(f):
    @wraps(f)
    def inner(request,*arg,**kwargs):
        if request.session.get('is_login') == '1':
            return f(request, *arg, **kwargs)
        else:
            return redirect('/login/')
    return inner



# 首页显示学生
@check_login
def index(request):
    
    uid = request.session["userid"]
    u = Users.objects.filter(id=uid)
        
    
    
    allstu = Student.objects.all()
            
    context = {
    
            "stulist":allstu,
            "username":u[0].username
    }

    return render(request, 'index.html', context = context)


# 新增学生的方法
@check_login
def stuadd(request):
    
    if request.method == "POST":
        form = StudentForm(request.POST)        
        if form.is_valid():
            form.save()
            return HttpResponseRedirect(reverse('index'))
    else:
        form = StudentForm()
        
    context = {
    
            "form": form,
    }
            
    
    # 跳转页面
    return render(request, 'stuadd.html', context = context)


# 用户登录
def login(request):
    if request.method == "POST":
        username = request.POST.get("username")
        userpwd = request.POST.get("userpwd")
        
        u = Users.objects.filter(username=username,userpwd=userpwd)
        if u:
            request.session["is_login"] = "1"
            request.session["userid"] = u[0].id
            return redirect('/')
    
    return render(request,'login.html')


def outlogin(request):
    request.session['is_login'] = "0"
    return render(request,'login.html')


def zhuce(request):
    if request.method == "POST":
        username = request.POST.get("username")
        userpwd = request.POST.get("userpwd")
        u = Users()
        u.username = username
        u.userpwd = userpwd
        u.save()
        return render(request,'login.html')
    
    return render(request,'zhuce.html')
    

#修改
def editstu(request):
    
    
    if request.method == "POST":
        stuid = request.POST.get("stuid")
        u = Student.objects.filter(id=stuid)

        form = StudentForm(request.POST,instance=u[0])
        if form.is_valid():
            form.save()
            return HttpResponseRedirect(reverse('index'))
    else:
        stuid = request.GET.get("stuid")
        u = Student.objects.filter(id=stuid)
        form = StudentForm(instance = u[0])
        
    context = {
    
            "form": form,
            "stuid":stuid
    }

    # 跳转页面
    return render(request, 'editstu.html', context = context)
    
  
 #删除
def delstu(request):
     stuid = request.GET.get("stuid")
     u = Student.objects.filter(id=stuid)
     u[0].delete()
     return HttpResponseRedirect(reverse('index'))
    
    
    
    
    
    
    
    
    
    
    
    
    

