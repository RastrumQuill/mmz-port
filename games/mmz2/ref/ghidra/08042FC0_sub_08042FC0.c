// sub_08042FC0 at 0x08042FC0 (thumb)

undefined4 sub_08042FC0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  undefined4 in_lr;
  
  iVar2 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  iVar3 = sub_08044D80(param_1,*(undefined *)(param_1 + 0xb5));
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa302);
    uVar4 = sub_080EF150(iVar2 - *(int *)(param_1 + 0x54),0x32);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff768;
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(undefined *)(param_1 + 0xb6) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  cVar6 = cVar1 + -1;
  *(char *)(param_1 + 0x12) = cVar6;
  uVar5 = (uint)(byte)(0x32 - cVar6);
  *(uint *)(param_1 + 0x54) = iVar2 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = iVar3 + uVar5 * *(int *)(param_1 + 0x60) + uVar5 * uVar5 * 0x2c;
  if (cVar1 == '\x1a') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

