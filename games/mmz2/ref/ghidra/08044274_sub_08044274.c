// sub_08044274 at 0x08044274 (thumb)

undefined4 sub_08044274(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa30a);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = 0xa00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = -0xa00;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar5;
    puVar7 = (undefined *)(param_1 + 0xb5);
    iVar3 = sub_08044D80(param_1,*puVar7);
    *(int *)(param_1 + 0xbc) = (iVar3 - *(int *)(param_1 + 0x58)) + -0x1400;
    uVar1 = sub_08044E5C(param_1);
    *puVar7 = uVar1;
    iVar3 = sub_08044D54(param_1,*puVar7);
    iVar5 = sub_08044D80(param_1,*puVar7);
    iVar5 = (iVar5 + -0x1600) - *(int *)(param_1 + 0xbc);
    uVar4 = sub_080EF150(iVar3 - *(int *)(param_1 + 0x54),0x1c);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
    *(undefined *)(param_1 + 0x12) = 0x1c;
    sub_08006E08(param_1 + 0x74,&DAT_0833a600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    iVar3 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
    iVar5 = sub_08044D80(param_1,*(undefined *)(param_1 + 0xb5));
    iVar5 = (iVar5 + -0x1600) - *(int *)(param_1 + 0xbc);
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  uVar6 = (uint)(byte)(0x1c - cVar2);
  *(uint *)(param_1 + 0x54) = iVar3 - (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = uVar6 * *(int *)(param_1 + 0x60) + iVar5 + uVar6 * uVar6 * 0x20;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 0x1700;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

