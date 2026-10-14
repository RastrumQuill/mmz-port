// sub_0800AEA4 at 0x0800AEA4 (thumb)

undefined4 sub_0800AEA4(int *param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar3 = (*param_1 >> 0xc) * 0x1000;
  sub_0800860C((*param_1 >> 0xc) + -2,0x1c,&DAT_083152a4);
  sub_0800860C((*param_1 >> 0xc) + -1,0x1b,&DAT_083152e8);
  iVar4 = 0;
  piVar2 = &DAT_083152f0;
  do {
    local_2c = (*piVar2 >> 1) + iVar3;
    local_28 = piVar2[1] + 0x1d000;
    local_24 = *piVar2 >> 3;
    local_20 = (piVar2[1] >> 3) + -0x400;
    uVar1 = sub_080EF1E8(iVar4,3);
    sub_080B6508(uVar1,&local_2c,&local_24);
    local_2c = *piVar2 + iVar3;
    sub_080AC60C(3,&local_2c);
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return in_lr;
}

