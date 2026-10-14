// sub_0803A270 at 0x0803A270 (thumb)

undefined4 sub_0803A270(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar4 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0x54) +
            (int)*(short *)(&DAT_0835b034 + (uint)*(byte *)(iVar1 + 0x147) * 8);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x54) -
            (int)*(short *)(&DAT_0835b034 + (uint)*(byte *)(iVar1 + 0x147) * 8);
  }
  iVar1 = sub_0803A7E8(iVar2 - iVar4,
                       (*(int *)(iVar1 + 0x58) +
                       (int)*(short *)(&DAT_0835b036 + (uint)*(byte *)(iVar1 + 0x147) * 8)) - iVar5)
  ;
  uVar3 = (uint)*(byte *)(param_1 + 0xc0);
  if ((((uVar3 - iVar1) + 4 & 0xff) < 9) || (*(char *)(param_1 + 0xe) != '\0')) {
    uVar3 = sub_0803A83C(iVar1,uVar3,4);
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      uVar3 = uVar3 + 4;
    }
    uVar3 = uVar3 & 0xff;
  }
  *(char *)(param_1 + 0xc0) = (char)uVar3;
  iVar1 = 0x600 - ((short)(&DAT_080fe64c)[uVar3 & 0x7f] * 0x360 >> 8);
  iVar2 = *(short *)((int)&DAT_080fe64c + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * iVar1 >> 8;
  *(int *)(param_1 + 0x5c) = iVar2;
  iVar1 = iVar1 * *(short *)((int)&DAT_080fe64c + ((uVar3 << 0x18) >> 0x17)) >> 8;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x54) = iVar4 + iVar2;
  *(int *)(param_1 + 0x58) = iVar5 + iVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

