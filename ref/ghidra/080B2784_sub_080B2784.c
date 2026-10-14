// sub_080B2784 at 0x080B2784 (thumb)

undefined4 sub_080B2784(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 in_lr;
  char acStack_30 [8];
  uint local_28 [4];
  undefined4 uStack_18;
  
  sub_080C8DD0(acStack_30,0,5);
  acStack_30[1] = 1;
  local_28[0] = 0xf;
  local_28[1] = 0x10;
  local_28[2] = 0x11;
  local_28[3] = 0x12;
  uStack_18 = 0x13;
  if (((int)(uint)(byte)(&DAT_02022ad4)[(int)local_28[*(byte *)(param_1 + 0x10)] >> 3] >>
       (local_28[*(byte *)(param_1 + 0x10)] & 7) & 1U) == 0) {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    cVar1 = acStack_30[*(byte *)(param_1 + 0x10)];
    *(char *)(param_1 + 0x44) = cVar1;
    if (cVar1 == '\0') {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6ce8;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_082b6ccc;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_082b6cb0;
    }
    sub_080055FC(param_1 + 0x74,puVar3,param_1 + 0x4c,0x60);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x800;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x700;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_080B28C4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

