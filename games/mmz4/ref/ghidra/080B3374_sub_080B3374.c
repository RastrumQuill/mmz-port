// sub_080B3374 at 0x080B3374 (thumb)

undefined4 sub_080B3374(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = sub_080B3460();
  iVar3 = *(short *)((int)&DAT_08128c10 + (((uVar2 & 0xff) + 0x40) * 0x1000000 >> 0x17)) * -0x200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = (short)(&DAT_08128c10)[uVar2 & 0xff] * -0x200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(undefined *)(param_1 + 0xb6) = 0;
  cVar1 = sub_08014654(param_1 + 0x54);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

