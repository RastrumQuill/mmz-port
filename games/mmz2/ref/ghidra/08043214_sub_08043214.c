// sub_08043214 at 0x08043214 (thumb)

undefined4 sub_08043214(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 in_lr;
  
  iVar2 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  iVar3 = sub_08044D80(param_1,*(undefined *)(param_1 + 0xb5));
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa303);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  cVar5 = cVar1 + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  uVar4 = (uint)(byte)(0x32 - cVar5);
  *(uint *)(param_1 + 0x54) = iVar2 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = iVar3 + uVar4 * *(int *)(param_1 + 0x60) + uVar4 * uVar4 * 0x2c;
  if (cVar1 == '\x01') {
    *(char *)(param_1 + 0xb6) = cVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(char *)(param_1 + 0xf) = cVar5;
  }
  return in_lr;
}

