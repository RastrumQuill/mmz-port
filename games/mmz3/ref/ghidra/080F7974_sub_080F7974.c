// sub_080F7974 at 0x080F7974 (thumb)

undefined4 sub_080F7974(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdd6) = 0;
  *(undefined *)(param_1 + 0xdd7) = 0;
  *(undefined *)(param_1 + 0xdd9) = 0;
  *(undefined *)(param_1 + 0xdda) = 0;
  *(undefined *)(param_1 + 0xddb) = 0;
  *(undefined *)(param_1 + 0xddc) = 0;
  *(undefined *)(param_1 + 0xddd) = 0;
  *(undefined *)(param_1 + 0xdde) = 0;
  sub_080F7F84(param_1);
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x1300;
  DAT_020023c6 = 0x4206;
  DAT_020023d0 = 0;
  DAT_02002400 = 0x2010;
  sub_0800393C(&DAT_08547438,0x4000);
  sub_08003E14(&DAT_08547444,0);
  sub_080F381C(param_1 + 0xed8,&DAT_0853ddd0,0,0);
  if (DAT_0200247b == '\x01') {
    sub_0800393C(&DAT_08547550,(DAT_020023c6 & 0xc) << 0xc);
    sub_08003E14(&DAT_0854755c,0);
  }
  else if (DAT_0200247b == '\x02') {
    sub_0800393C(&DAT_08547564,(DAT_020023c6 & 0xc) << 0xc);
    sub_08003E14(&DAT_08547570,0);
  }
  sub_080F8034(param_1);
  sub_0800393C(&DAT_085d7a10,(DAT_0202fa2c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7a1c,(DAT_0202f82c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f74,(DAT_0202fab6 - 0x3c1) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f80,(DAT_0202f8b6 - 10) * 0x20 + 0x200);
  sub_080E7084(param_1,3);
  sub_080E7084(param_1,4);
  sub_080E7D24(param_1,0);
  sub_080E7D24(param_1,1);
  sub_080E7D24(param_1,2);
  sub_080E7D24(param_1,3);
  sub_080040A8(0x40,0);
  uVar1 = 0;
  do {
    (&DAT_03002be0)[uVar1] = (&DAT_03002bc0)[uVar1];
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x10);
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 1) = 1;
  sub_080F7B80(param_1);
  return in_lr;
}

