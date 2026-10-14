// sub_080707DC at 0x080707DC (thumb)

undefined4 sub_080707DC(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar2 = *(char *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,3);
    *(undefined *)(param_1 + 0x12) = 0x18;
    cVar2 = -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pcVar4 = (char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(*pcVar4 * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*pcVar4) * 0x18);
  *(char *)(param_1 + 0x13) = *pcVar4;
  cVar1 = *pcVar4;
  sub_08073984(param_1);
  if ((cVar1 != cVar2) && ((cVar1 == '\x06' || (cVar1 == '\n')))) {
    sub_08002B10(0x136);
    uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_080D4898(&local_20,&DAT_08859704,0,uVar3 | uVar3 << 4);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

