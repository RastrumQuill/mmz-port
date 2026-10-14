// sub_0811D3AC at 0x0811D3AC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811D3AC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdcc) = 0;
  sub_0811E374(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0;
  sub_0800249C(0x3f,0);
  sub_0800249C(0x40,0);
  *(undefined *)(param_1 + 0xdd0) = 0;
  if ((DAT_0202e8b5 & 0x20) != 0) {
    *(undefined *)(param_1 + 0xdd0) = 1;
  }
  bVar1 = DAT_0202e8b6;
  if ((DAT_0202e8b6 & 1) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 0x20) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 0x40) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 0x80) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  bVar1 = DAT_0202e8b7;
  if ((DAT_0202e8b7 & 1) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 2) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 4) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  if ((bVar1 & 8) != 0) {
    *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
  }
  sub_08001D30(&DAT_08b6c21c,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c228,0);
  if (*(byte *)(param_1 + 0xdd0) < 6) {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x21,0,0);
  }
  else {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x22,0,0);
  }
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  sub_08001D30(&DAT_08c447e4,(DAT_0202e10a - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c447f0,(DAT_0202df0a - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c447f8,(DAT_0202e10c - 0x21d) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44804,(DAT_0202df0c - 5) * 0x20 + 0x200);
  sub_0810B634(param_1,0,0);
  sub_0810B634(param_1,1,0);
  sub_0810B634(param_1,3,0);
  switch(*(undefined *)(param_1 + 0xdd0)) {
  case 1:
    sub_0810B634(param_1,0,1);
    break;
  case 2:
    goto switchD_0811d5be_caseD_2;
  case 4:
    sub_0810B634(param_1,0,0xb);
    break;
  case 5:
    goto switchD_0811d5be_caseD_5;
  case 6:
    goto switchD_0811d5be_caseD_6;
  case 7:
    goto switchD_0811d5be_caseD_7;
  case 8:
    goto switchD_0811d5be_caseD_8;
  case 9:
    sub_0810B634(param_1,0,0xf);
switchD_0811d5be_caseD_8:
    sub_0810B634(param_1,0,0xe);
switchD_0811d5be_caseD_7:
    sub_0810B634(param_1,0,0xd);
switchD_0811d5be_caseD_6:
    sub_0810B634(param_1,0,0xc);
switchD_0811d5be_caseD_5:
    sub_0810B634(param_1,0,0xb);
switchD_0811d5be_caseD_2:
    sub_0810B634(param_1,0,1);
    sub_0810B634(param_1,0,2);
    sub_0810B634(param_1,0,3);
    sub_0810B634(param_1,0,4);
    sub_0810B634(param_1,0,5);
    sub_0810B634(param_1,0,6);
    sub_0810B634(param_1,0,7);
    sub_0810B634(param_1,0,8);
    sub_0810B634(param_1,0,9);
    if ((DAT_0202e8b4 & 1) == 0) {
      if ((DAT_0202e8b4 & 4) == 0) {
        sub_0810BAA4(param_1,~*(byte *)(DAT_0202e8e0 + 0x42) & 1,2);
        sub_0810BAA4(param_1,~*(byte *)(DAT_0202e8e0 + 0x42) & 1,3);
        sub_0810BAA4(param_1,*(byte *)(DAT_0202e8e0 + 0x42) & 1,4);
        sub_0810BAA4(param_1,~*(byte *)(DAT_0202e8e0 + 0x42) & 1,5);
        sub_0810BAA4(param_1,*(byte *)(DAT_0202e8e0 + 0x42) & 1,6);
        sub_0810BAA4(param_1,*(byte *)(DAT_0202e8e0 + 0x42) & 1,7);
        sub_0810BAA4(param_1,~*(byte *)(DAT_0202e8e0 + 0x42) & 1,8);
        sub_0810BAA4(param_1,*(byte *)(DAT_0202e8e0 + 0x42) & 1,9);
        break;
      }
      sub_0810BAA4(param_1,0,2);
      sub_0810BAA4(param_1,0,3);
      sub_0810BAA4(param_1,0,4);
      sub_0810BAA4(param_1,0,5);
      sub_0810BAA4(param_1,0,6);
      sub_0810BAA4(param_1,0,7);
      sub_0810BAA4(param_1,0,8);
      uVar2 = 0;
    }
    else {
      sub_0810BAA4(param_1,1,2);
      sub_0810BAA4(param_1,1,3);
      sub_0810BAA4(param_1,1,4);
      sub_0810BAA4(param_1,1,5);
      sub_0810BAA4(param_1,1,6);
      sub_0810BAA4(param_1,1,7);
      sub_0810BAA4(param_1,1,8);
      uVar2 = 1;
    }
    sub_0810BAA4(param_1,uVar2,9);
  }
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)(param_1 + 2) = 0;
  sub_0811E424(param_1,0);
  sub_0811D838(param_1);
  return in_lr;
}

