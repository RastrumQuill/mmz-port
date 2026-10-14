// sub_08019544 at 0x08019544 (thumb)

undefined4 sub_08019544(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202e202 = 0x3b2;
    DAT_0202e002 = 9;
    if (*(int *)(param_1 + 0x34) < 0xca1) {
      if (*(int *)(param_1 + 0x34) < 0x5a1) {
        uVar1 = sub_080F7DEC(&DAT_088360b0,1,1);
        *(undefined4 *)(param_1 + 0x68) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360b8,1,1);
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360c0,1,1);
        *(undefined4 *)(param_1 + 0x70) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360c8,1,1);
        *(undefined4 *)(param_1 + 0x74) = uVar1;
      }
      else {
        sub_08002B10(0x74);
        uVar1 = sub_080F7DEC(&DAT_088360d0,0,1);
        *(undefined4 *)(param_1 + 0x68) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360d8,0,1);
        *(undefined4 *)(param_1 + 0x6c) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360e0,1,1);
        *(undefined4 *)(param_1 + 0x70) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360e8,0,1);
        *(undefined4 *)(param_1 + 0x74) = uVar1;
        uVar1 = sub_080F7DEC(&DAT_088360f0,0,1);
        *(undefined4 *)(param_1 + 0x78) = uVar1;
      }
    }
    else {
      uVar1 = sub_080F7DEC(&DAT_088360f8,2,1);
      *(undefined4 *)(param_1 + 0x68) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836100,2,1);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836108,2,1);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836110,2,1);
      *(undefined4 *)(param_1 + 0x74) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836118,2,1);
      *(undefined4 *)(param_1 + 0x78) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836120,2,1);
      *(undefined4 *)(param_1 + 0x7c) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836128,2,1);
      *(undefined4 *)(param_1 + 0x80) = uVar1;
      uVar1 = sub_080F7DEC(&DAT_08836130,2,1);
      *(undefined4 *)(param_1 + 0x84) = uVar1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

