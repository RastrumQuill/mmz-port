// sub_0809EE88 at 0x0809EE88 (thumb)

undefined4 sub_0809EE88(int param_1)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
  }
  sub_0809C980(param_1);
  psVar2 = (short *)(param_1 + 0xc4);
  *(int *)(iVar3 + 0x50) =
       *(int *)(param_1 + 0x50) - *(int *)(&DAT_082b5674 + ((int)*psVar2 / 2) * 4);
  *psVar2 = *psVar2 + 1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(iVar4 + 0xe2) = *(byte *)(iVar4 + 0xe2) & ~(byte)(1 << *(sbyte *)(param_1 + 0x11));
    if (*(char *)(iVar4 + 0xe1) != '\x02') {
      bVar1 = *(byte *)(iVar4 + 0xe3);
      if (((int)(uint)bVar1 >> *(sbyte *)(param_1 + 0x11) & 1U) != 0) {
        *(byte *)(iVar4 + 0xe3) = bVar1 & ~(byte)(1 << *(sbyte *)(param_1 + 0x11));
      }
    }
  }
  return in_lr;
}

