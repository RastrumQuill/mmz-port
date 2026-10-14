// sub_08043868 at 0x08043868 (thumb)

undefined4 sub_08043868(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    DAT_0202ebbc = DAT_0202ebbc | 0x10;
    sub_080127E4(param_1,0xa304);
    sub_08006E08(param_1 + 0x74,&DAT_0833a720);
    sub_08044DC0(param_1);
    bVar2 = sub_08044DC0(param_1);
    if (bVar2 < *(byte *)(param_1 + 0xb5)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar3 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 <= iVar3) {
LAB_0804393c:
      uVar4 = sub_080093C4(iVar5,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  else {
    iVar3 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar3 <= iVar5) goto LAB_0804393c;
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + -0x2a;
  }
  else if (cVar1 < '\x02') {
    if (cVar1 != '\0') {
LAB_080439ba:
      uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) / 2;
    iVar5 = *(int *)(param_1 + 0x58) + -0xaa;
  }
  else if (cVar1 == '\x02') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) / 2;
    iVar5 = *(int *)(param_1 + 0x58) + 0x2a;
  }
  else {
    if (cVar1 != '\x03') goto LAB_080439ba;
    iVar3 = *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x58) + 0xaa;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = iVar5;
  return in_lr;
}

