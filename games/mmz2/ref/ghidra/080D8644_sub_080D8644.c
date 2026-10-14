// sub_080D8644 at 0x080D8644 (thumb)

undefined4 sub_080D8644(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xb4) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xb8) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + *(int *)(param_1 + 0xc0);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b554 + (uint)*(byte *)(param_1 + 0xe) * 4));
  uVar1 = sub_080EF1E8(*(byte *)(param_1 + 0x12) + 1,0xa0);
  *(char *)(param_1 + 0x12) = (char)uVar1;
  iVar2 = sub_080EF1E8(uVar1,0xa0);
  uVar3 = sub_080EF150(iVar2 << 8,0xa0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[uVar3 & 0xff] * 0xc;
  iVar2 = sub_080EF1E8(uVar1,0x50);
  uVar3 = sub_080EF150(iVar2 << 8,0x50);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[uVar3 & 0xff] * -4;
  return in_lr;
}

