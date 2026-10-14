// sub_0809ED28 at 0x0809ED28 (thumb)

undefined4 sub_0809ED28(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    sub_08001EAC(0x17);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  sub_0809C980(param_1);
  psVar1 = (short *)(param_1 + 0xc4);
  *(int *)(iVar2 + 0x50) =
       *(int *)(param_1 + 0x50) - *(int *)(&DAT_082b55b8 + (uint)(byte)(&DAT_082b5600)[*psVar1] * 4)
  ;
  *psVar1 = *psVar1 + 1;
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

