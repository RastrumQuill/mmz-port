// sub_080372C8 at 0x080372C8 (thumb)

undefined4 sub_080372C8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08038B64(param_1);
  uVar1 = sub_0807F2C8(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return in_lr;
}

