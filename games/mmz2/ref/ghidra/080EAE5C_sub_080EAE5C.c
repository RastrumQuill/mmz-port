// sub_080EAE5C at 0x080EAE5C (thumb)

undefined8 sub_080EAE5C(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  sVar2 = sub_080D5D30(uVar3,*(undefined *)(param_1 + 4));
  if (sVar2 < 0) {
    *(undefined *)(param_1 + 1) = 0;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 2) = 1;
    *(char *)(param_1 + 5) = (char)sVar2;
    sub_080DA984(param_1,0,*(undefined *)(param_1 + 4));
    sub_080DCF18(0,param_1,*(undefined *)(param_1 + 4));
    sub_080DD418(0,param_1,*(undefined *)(param_1 + 4));
    uVar1 = sub_080D6094(uVar3,*(undefined *)(param_1 + 4),(int)sVar2);
    sub_080EB08C(uVar3,uVar1);
    sub_080032EC(1);
  }
  return CONCAT44(in_lr,1);
}

