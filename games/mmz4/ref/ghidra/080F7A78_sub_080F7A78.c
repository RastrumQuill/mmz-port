// sub_080F7A78 at 0x080F7A78 (thumb)

undefined4 sub_080F7A78(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar4 = (undefined4 *)((int)&DAT_0202daf0 + 1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar4 = &DAT_0202daf0;
  }
  bVar1 = *(byte *)puVar4;
  pbVar3 = (byte *)(param_1 + 0xb4);
  if ((*pbVar3 == 0) || (bVar1 == *pbVar3)) {
    cVar2 = sub_08128A9C(bVar1,3);
    if (cVar2 == '\0') {
      if ((*pbVar3 == 0) && (2 < bVar1)) {
        if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
          *(uint *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          sub_0801CF00(param_1,0x7301);
          cVar2 = sub_08128A24(bVar1,3);
          bVar1 = cVar2 * '\x03' - 2;
          *pbVar3 = bVar1;
          *(byte *)puVar4 = bVar1;
        }
      }
    }
  }
  else {
    *pbVar3 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08866e08,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0801CF00(param_1,0x7302);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

