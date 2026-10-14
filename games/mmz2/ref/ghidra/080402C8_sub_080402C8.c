// sub_080402C8 at 0x080402C8 (thumb)

undefined4 sub_080402C8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_080127E4(param_1,0xa212);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      sub_080127E4(param_1,0xa213);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
        uVar2 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x40;
        uVar2 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar2;
      uVar2 = sub_0807414C(param_1,2,0);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      sub_080032EC(0x2f);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar1 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0xf) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = 0x400;
      }
      else {
        local_14 = 0xfffffc00;
      }
      local_10 = 0xffffde00;
      uVar2 = sub_080B878C(param_1,&local_14);
      *(undefined4 *)(param_1 + 0xe0) = uVar2;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (1 < *(byte *)(*(int *)(param_1 + 0xe0) + 0xc)) {
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  }
  return in_lr;
}

