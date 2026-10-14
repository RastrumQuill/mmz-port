// sub_080704DC at 0x080704DC (thumb)

undefined4 sub_080704DC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1802);
    cVar2 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (cVar2 != '\0') {
      uVar3 = sub_0807092C(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800)
      ;
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    sub_080B37AC(param_1,param_1 + 0x54,1,bVar1 >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != -1) {
    cVar2 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
    if (cVar2 == '\0') {
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(undefined *)(param_1 + 0xb4) = 1;
      return in_lr;
    }
    if ((*(char *)(param_1 + 0xb4) == '\0') && (*(byte *)(param_1 + 0x12) < 0x30)) {
      return in_lr;
    }
  }
  sub_080707E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0801DD2C(3,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

