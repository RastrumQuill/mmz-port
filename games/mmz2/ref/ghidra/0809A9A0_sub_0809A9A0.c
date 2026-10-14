// sub_0809A9A0 at 0x0809A9A0 (thumb)

undefined4 sub_0809A9A0(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xd06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar3 = (uint)(byte)(&DAT_083436a4)[*(byte *)(param_1 + 0xb8)] * 0x100;
  puVar1 = (ushort *)(param_1 + 0xb4);
  uVar2 = (uint)*puVar1;
  if (uVar2 < uVar3) {
    *puVar1 = (ushort)(uVar2 + 0x240);
    if ((uVar2 + 0x240 & 0xffff) < uVar3) {
LAB_0809aa06:
      sub_0809AC10(param_1);
      return in_lr;
    }
  }
  else if ((uVar3 < uVar2) && (*puVar1 = (ushort)(uVar2 - 0x240), uVar3 < (uVar2 - 0x240 & 0xffff)))
  goto LAB_0809aa06;
  *puVar1 = (ushort)uVar3;
  sub_0809AC10(param_1);
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

