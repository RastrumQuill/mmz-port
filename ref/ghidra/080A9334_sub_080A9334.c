// sub_080A9334 at 0x080A9334 (thumb)

undefined4 sub_080A9334(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  byte abStack_18 [12];
  
  sub_080C8D70(abStack_18,&DAT_080c94f0,10);
  if ((abStack_18[*(byte *)(param_1 + 0x10)] == 0xff) ||
     ((*(char *)(param_1 + 0x11) == '\0' &&
      (((int)(uint)(byte)(&DAT_02022ad4)
                         [(int)*(uint *)(&DAT_082b645c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
        >> (*(uint *)(&DAT_082b645c + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,abStack_18[*(byte *)(param_1 + 0x10)] + 8);
    sub_0809C980(param_1);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(uint *)(param_1 + 0xc4) = (uint)abStack_18[*(byte *)(param_1 + 0x10)] << 2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 6;
    }
    else {
      uVar3 = 0;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080A92FC(param_1);
  }
  return in_lr;
}

