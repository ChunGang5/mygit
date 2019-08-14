# -*- coding: utf-8 -*-

from django import forms
from .models import Student


class StudentForm(forms.ModelForm):
    def clean_qq(self):
            cleaned_data = self.cleaned_data['qq']
            if not cleaned_data.isdigit():
                return forms.ValidationError('必须时数字')
            return int(cleaned_data)
        
    class Meta:
            model = Student
            fields  = ( 'name','sex','profession','status','email','qq','phone')

    