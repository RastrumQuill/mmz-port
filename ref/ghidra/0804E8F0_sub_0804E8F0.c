// sub_0804E8F0 at 0x0804E8F0 (thumb)

undefined4 sub_0804E8F0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080489E4(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082af1a8);
    if (*(char *)(param_1 + 0x10) == '\x04') {
      if (DAT_02022c7c < *(int *)(param_1 + 0x4c)) {
        *(int *)(param_1 + 0x4c) = DAT_02022c7c + 0x57ff;
        *(undefined *)(param_1 + 0x44) = 0;
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        *(int *)(param_1 + 0x4c) = DAT_02022c7c + -0x5800;
        *(undefined *)(param_1 + 0x44) = 1;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    if (DAT_02022c80 + -0x7000 < *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = DAT_02022c80 + -0x7000;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x200;
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x12) = 0x42;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  if ((cVar2 == '\0') ||
     (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar3 + 0x2000), cVar2 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

