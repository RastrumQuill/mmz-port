// sub_080B7608 at 0x080B7608 (thumb)

undefined4 sub_080B7608(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_080B4200(param_1,param_1 + 0xbc,param_1 + 0x54,param_1 + 0xcc,2,0,0xfffff400);
  iVar5 = *(byte *)(param_1 + 0x12) + 1;
  uVar3 = (uint)*(byte *)(iVar4 + 0x118);
  if ((*(uint *)(iVar4 + 0xc) & 0xffff00) == 0x700) {
    if (uVar3 < 0x3c) {
      iVar5 = *(byte *)(param_1 + 0x12) + 2;
      uVar2 = 2;
      if (0x13 < uVar3) {
        uVar2 = 4;
        uVar3 = uVar3 - 0x14;
      }
      iVar4 = sub_080C8CB0(uVar3 + 1,uVar2);
      if (iVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
    sub_08099D0C(param_1,2);
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = sub_080C8B68(iVar5,0x30);
  *(char *)(param_1 + 0x12) = (char)uVar2;
  iVar4 = sub_080C8B68(uVar2,0x30);
  iVar4 = sub_080C8AD0(iVar4 << 8,0x30);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[iVar4] * 8;
  iVar4 = sub_080C8B68(uVar2,0x18);
  iVar4 = sub_080C8AD0(iVar4 << 8,0x18);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar4] * -8;
  return in_lr;
}

