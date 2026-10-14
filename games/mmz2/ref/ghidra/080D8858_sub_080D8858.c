// sub_080D8858 at 0x080D8858 (thumb)

undefined4 sub_080D8858(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080D5430(param_1,param_1 + 0xb4,param_1 + 0x5c,param_1 + 0xc4,2,0,0xfffff400);
  iVar5 = *(byte *)(param_1 + 0x12) + 1;
  uVar3 = (uint)*(byte *)(iVar4 + 0x184);
  if ((*(uint *)(iVar4 + 0xc) & 0xffff00) == 0x800) {
    if (uVar3 < 0x3c) {
      iVar5 = *(byte *)(param_1 + 0x12) + 2;
      uVar2 = 2;
      if (0x13 < uVar3) {
        uVar2 = 4;
        uVar3 = uVar3 - 0x14;
      }
      iVar4 = sub_080EF330(uVar3 + 1,uVar2);
      if (iVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        goto LAB_080d88e6;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BEE58(param_1,2);
  }
  bVar1 = *(byte *)(param_1 + 10) | 1;
LAB_080d88e6:
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = sub_080EF1E8(iVar5,0x30);
  *(char *)(param_1 + 0x12) = (char)uVar2;
  iVar4 = sub_080EF1E8(uVar2,0x30);
  uVar3 = sub_080EF150(iVar4 << 8,0x30);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[uVar3 & 0xff] * 8;
  iVar4 = sub_080EF1E8(uVar2,0x18);
  uVar3 = sub_080EF150(iVar4 << 8,0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[uVar3 & 0xff] * -8;
  return in_lr;
}

