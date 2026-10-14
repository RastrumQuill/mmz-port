// sub_080A7328 at 0x080A7328 (thumb)

undefined4 sub_080A7328(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    uVar4 = 2;
    if (*(int *)(param_1 + 0xb8) < 0) {
      uVar4 = 3;
    }
    sub_080B919C(param_1 + 0x54,uVar4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
        *(undefined *)(param_1 + 0x12) = 0x50;
        sub_080127E4(param_1,0x6900);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 == '\0') {
        *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0834513c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xb4) = 0x80;
    *(undefined4 *)(param_1 + 0xb8) = 0x4000;
    bVar1 = *(byte *)(param_1 + 0xb5);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar5 = (byte *)(param_1 + 0xb4);
  pbVar6 = (byte *)(param_1 + 0xb5);
  *pbVar5 = *pbVar5 - (*pbVar6 * '\x04' + -2);
  sub_080A6D28(param_1);
  if (*(int *)(param_1 + 0xb8) < 1) {
    sub_08006E08(param_1 + 0x74,&DAT_0834513c);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0834510c);
  }
  if ((uint)*pbVar5 == (uint)*pbVar6 * -200 + 0xe4) {
    local_1c = *(int *)(param_1 + 0x54) + ((uint)*pbVar6 * -0x20 + 0x10) * -0x100;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080032EC(0x105);
    if ((*(byte *)(param_1 + 0xb6) & 2) == 0) {
      sub_080A6A1C(iVar7,&local_1c,*pbVar6);
    }
    else {
      sub_080A6B28(iVar7,&local_1c,*pbVar6);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

