// sub_080D4EF8 at 0x080D4EF8 (thumb)

undefined4 sub_080D4EF8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd52 = 0x340;
    DAT_0202f752 = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sVar1 = sub_080D0554(param_1,0xa100,1);
    if (sVar1 == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa109);
    DAT_0202fa52 = 0x327;
    DAT_0202f852 = 7;
    sub_0800393C(&DAT_085d7b8c,0x124e0);
    sub_08003E14(&DAT_085d7b98,(DAT_0202f852 - 4) * 0x20 + 0x200);
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    break;
  case 3:
  case 5:
  case 7:
    sub_080177F4(param_1);
    sub_08017700(param_1,0xa10b);
    iVar2 = sub_080D0324(param_1,0x2c);
    *(char *)(iVar2 + 0x11) = (char)((int)(*(byte *)(param_1 + 0xd) - 3) / 2);
    sub_0800471C(0xf5);
    sub_0801ACF8(2,param_1 + 0x54);
    break;
  case 4:
  case 6:
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 9:
    sub_08017700(param_1,0xa100);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 10:
    sub_080177F4(param_1);
  default:
    goto switchD_080d4f0c_caseD_b;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d4f0c_caseD_b:
  return in_lr;
}

