// sub_081195DC at 0x081195DC (thumb)

undefined4 sub_081195DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xdd0) = 0;
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined *)(param_1 + 0xdd2) = 0;
  *(undefined2 *)(param_1 + 0xdfc) = 0;
  *(undefined2 *)(param_1 + 0xdfe) = 0;
  *(undefined2 *)(param_1 + 0xe00) = 0;
  *(undefined2 *)(param_1 + 0xe02) = 0;
  *(undefined *)(param_1 + 0xdf7) = 0;
  sub_08001D30(&DAT_08b6c1a4,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c1b0,0);
  sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,0x15,0,0);
  sub_08001D30(&DAT_08c44514,(DAT_0202e0c2 - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44520,(DAT_0202dec2 - 8) * 0x20 + 0x200);
  sub_0810AA98(param_1,0,0);
  sub_0810AA98(param_1,0,1);
  sub_0810AA98(param_1,0,2);
  sub_0810AA98(param_1,0,3);
  sub_0810AA98(param_1,1,0);
  sub_0810AA98(param_1,2,0);
  sub_0810AA98(param_1,2,1);
  sub_0810AA98(param_1,3,0);
  sub_0810AA98(param_1,4,0);
  sub_0810AA98(param_1,4,1);
  sub_0810AA98(param_1,4,2);
  sub_0810AA98(param_1,4,3);
  sub_0810AA98(param_1,4,4);
  sub_0810AA98(param_1,4,5);
  sub_0800249C(0x43,0x300);
  DAT_02000a50 = DAT_02000a50 | 0x2000;
  DAT_02000a5c = 0xfe;
  DAT_02000a5e = 0xff;
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

