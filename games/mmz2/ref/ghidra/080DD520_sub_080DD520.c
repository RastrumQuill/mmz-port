// sub_080DD520 at 0x080DD520 (thumb)

ulonglong sub_080DD520(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = sub_080DD4DC();
  uVar1 = *(undefined *)(param_1 + 0x12);
  uVar2 = *(undefined *)(param_1 + 0x11);
  sVar3 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c388 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  uVar2 = sub_080D6094(uVar4,uVar2,(int)sVar3);
  *(undefined *)(param_1 + 0x12) = uVar2;
  uVar4 = sub_080EF128(param_1,uVar4,uVar2,uVar1);
  return CONCAT44(in_lr,uVar4) & 0xffffffff0000ffff;
}

