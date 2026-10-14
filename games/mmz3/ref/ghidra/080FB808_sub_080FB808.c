// sub_080FB808 at 0x080FB808 (thumb)

undefined8 sub_080FB808(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  pcVar5 = (char *)(param_1 + 0xdcc);
  *(undefined2 *)(param_1 + 0xddc) = DAT_02002130;
  *(undefined2 *)(param_1 + 0xdde) = DAT_02002134;
  cVar1 = *(char *)(param_1 + 0xdfd);
  if (cVar1 == '\0') {
    if ((*(int *)(param_1 + 0xdd8) == 0) || (1 < *(byte *)(*(int *)(param_1 + 0xdd8) + 0xc))) {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      uVar2 = sub_08099AAC(pcVar5,uVar4 * 2 >> 0x11 & 1);
      *(undefined4 *)(param_1 + 0xdd8) = uVar2;
    }
    sub_080FB244(param_1);
  }
  else {
    *(char *)(param_1 + 0xdfd) = cVar1 + -1;
  }
  if (0x2a30 < *(int *)(param_1 + 0xdec)) {
    *(undefined4 *)(param_1 + 0xdec) = 0x2a30;
  }
  if ((*(int *)(param_1 + 0xdec) == 0) ||
     (iVar3 = *(int *)(param_1 + 0xdec) + -1, *(int *)(param_1 + 0xdec) = iVar3, iVar3 < 1)) {
    *pcVar5 = *pcVar5 + '\x01';
    *(undefined *)(param_1 + 0xdcd) = 0;
    *(undefined *)(param_1 + 0xdce) = 0;
    *(undefined *)(param_1 + 0xdcf) = 0;
    *(undefined *)(param_1 + 0xe00) = 1;
    *(undefined4 *)(param_1 + 0xdec) = 0;
  }
  return CONCAT44(in_lr,1);
}

