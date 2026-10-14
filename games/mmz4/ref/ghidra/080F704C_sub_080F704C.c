// sub_080F704C at 0x080F704C (thumb)

undefined4 sub_080F704C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0202e910 == 0x10) {
    DAT_0202e10e = 0x3ca;
    DAT_0202df0e = 9;
  }
  sub_08001D30(&DAT_08c4480c,(DAT_0202e10e - 0x3d2) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44818,(DAT_0202df0e - 9) * 0x20 + 0x200);
  uVar1 = sub_080F6FAC(param_1,1,2);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = sub_080F6FAC(param_1,1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = sub_080F6FAC(param_1,1,1);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = sub_080F6FAC(param_1,2,3);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = sub_080F6FAC(param_1,1,4);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = sub_080F6FAC(param_1,2,5);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined *)(param_1 + 0xe) = 4;
  }
  sub_080F701C(param_1);
  return in_lr;
}

