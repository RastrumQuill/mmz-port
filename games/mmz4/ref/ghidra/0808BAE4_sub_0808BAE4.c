// sub_0808BAE4 at 0x0808BAE4 (thumb)

undefined8 sub_0808BAE4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  pcVar4 = (char *)(param_1 + 0xbb);
  cVar1 = *pcVar4;
  *pcVar4 = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    local_14[0] = 0x2100;
    local_14[1] = 0x2101;
    pbVar3 = (byte *)(param_1 + 0xba);
    *pbVar3 = *pbVar3 + 1 & 1;
    sub_0801CF00(param_1,*(undefined2 *)(local_14 + *pbVar3));
    *pcVar4 = '\x04';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c048 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885c1b0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x2100) * 4)) *
               0x18);
  if ((*(char *)(param_1 + 0xba) == '\0') && (*pcVar4 == '\x01')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

