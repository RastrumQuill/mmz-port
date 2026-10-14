// sub_08095164 at 0x08095164 (thumb)

undefined4 sub_08095164(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar3 = sub_08094AA8(param_1,(uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) *
                                 0x100 + -0x80);
    if (cVar3 == '\0') {
      uVar4 = 1;
      goto LAB_0809526a;
    }
    sub_08007390(param_1 + 0x74,&DAT_083667b4);
    sub_08017700(param_1,0xd402);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3200U < 0x6400) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar5 = (uint)bVar1 * 0x100 + -0x80;
  cVar3 = sub_08094AA8(param_1,iVar5);
  if ((cVar3 == '\0') || (cVar3 = sub_08094B14(param_1,iVar5), cVar3 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  cVar3 = sub_08094AE0(param_1,1);
  if (cVar3 != '\0') {
    return in_lr;
  }
  uVar4 = 2;
LAB_0809526a:
  *(undefined *)(param_1 + 0xd) = uVar4;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

