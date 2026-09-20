student=[{'name': 'Nam','age':22, 'score': 85},
         {'name': 'Lan', 'age': 20, 'score': 92},
         {'name': 'Tuan', 'age': 23, 'score': 78}]
sorted_by_score=sorted(student,key=lambda student: student['score'])
print("sap xep theo diem:")
for s in sorted_by_score:
    print(s)
sorted_by_age=sorted(student,key=lambda student: student['age'])
print("sap xeptheo tuoi:")
for s in sorted_by_age:
    print(s)