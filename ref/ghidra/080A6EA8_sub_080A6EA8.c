// sub_080A6EA8 at 0x080A6EA8 (thumb)

undefined4 sub_080A6EA8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  uint local_1c [4];
  
  local_1c[0] = 0x15;
  local_1c[1] = 0x16;
  local_1c[2] = 0x17;
  local_1c[3] = 0x18;
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02022ad4)[(int)local_1c[*(byte *)(param_1 + 0x10)] >> 3] =
         (&DAT_02022ad4)[(int)local_1c[*(byte *)(param_1 + 0x10)] >> 3] &
         ~(byte)(1 << (local_1c[*(byte *)(param_1 + 0x10)] & 7));
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_0809C930(param_1,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2000;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
  if (cVar1 != '\0') {
    sub_0808827C(3,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

