// sub_08042684 at 0x08042684 (thumb)

undefined4 sub_08042684(int param_1)

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
    sub_080127E4(param_1,0xa304);
    uVar4 = sub_080EF150(iVar2 - *(int *)(param_1 + 0x54),0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffbe0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08006E08(param_1 + 0x74,&DAT_0833a720);
    *(undefined *)(param_1 + 0xb6) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x71) < '\x02') {
    sub_080128D4(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12);
  cVar6 = cVar1 + -1;
  *(char *)(param_1 + 0x12) = cVar6;
  uVar5 = (uint)(byte)(0x18 - cVar6);
  *(uint *)(param_1 + 0x54) = iVar2 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = iVar3 + uVar5 * *(int *)(param_1 + 0x60) + uVar5 * uVar5 * 0x2c;
  if (cVar1 == '\x01') {
    *(char *)(param_1 + 0xb6) = cVar6;
    sub_08006E08(param_1 + 0x74,&DAT_0833a6f0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(char *)(param_1 + 0xf) = cVar6;
  }
  return in_lr;
}

