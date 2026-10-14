// sub_080C5044 at 0x080C5044 (thumb)

undefined4 sub_080C5044(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  puVar3 = (undefined *)(param_1 + 0x9e4);
  sVar2 = sub_080B4A14(&DAT_0202b5a0,*puVar3);
  if (sVar2 < 0) {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0x9e5) = (char)sVar2;
    sub_080B9920(param_1,2,*puVar3);
    sub_080BB4D0(2,param_1,*puVar3);
    sub_080BB978(2,param_1,*puVar3);
    uVar1 = sub_080B4DA4(&DAT_0202b5a0,*puVar3,*(undefined *)(param_1 + 0x9e5));
    sub_080C5B00(&DAT_0202b5a0,uVar1);
    sub_08001EAC(0x29);
  }
  return in_lr;
}

