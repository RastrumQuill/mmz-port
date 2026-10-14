// sub_08065554 at 0x08065554 (thumb)

undefined4 sub_08065554(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_08002638(&DAT_084336b0,(DAT_0202e688 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084336bc,(DAT_0202e488 - 4) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7c00);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833d8f8,0x30);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar1 = sub_080032EC(0xea);
  *(undefined2 *)(param_1 + 0xc2) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08065624(param_1);
  return in_lr;
}

