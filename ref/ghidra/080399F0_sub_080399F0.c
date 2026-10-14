// sub_080399F0 at 0x080399F0 (thumb)

undefined4 sub_080399F0(int param_1)

{
  undefined4 in_lr;
  short asStack_14 [4];
  
  sub_080C8D70(asStack_14,&DAT_080c927c,8);
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08029874(param_1,&DAT_082adb70,(int)asStack_14[*(byte *)(param_1 + 0x11)]);
  *(undefined2 *)(param_1 + 200) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08039A8C(param_1);
  return in_lr;
}

