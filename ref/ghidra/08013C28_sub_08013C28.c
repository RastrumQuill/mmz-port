// sub_08013C28 at 0x08013C28 (thumb)

undefined4 sub_08013C28(int param_1,undefined *param_2)

{
  undefined4 in_lr;
  
  if (param_2 == (undefined *)0x0) {
    sub_08013C0C(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined *)(param_1 + 0x19) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  else {
    sub_08013C0C(param_1,*param_2);
    *(byte *)(param_1 + 0x19) = param_2[1] | 8;
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_1 + 0x4c) = (int)*(short *)(param_2 + 0x14);
    *(int *)(param_1 + 0x50) = (int)*(short *)(param_2 + 0x16);
    *(int *)(param_1 + 0x54) = (int)*(short *)(param_2 + 0x18);
    *(int *)(param_1 + 0x58) = (int)*(short *)(param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x28);
  }
  return in_lr;
}

