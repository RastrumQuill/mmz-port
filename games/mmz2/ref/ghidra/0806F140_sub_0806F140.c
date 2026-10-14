// sub_0806F140 at 0x0806F140 (thumb)

undefined4 sub_0806F140(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x1708);
    uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = uVar4 | 1;
    }
    sub_080B0ACC(param_1 + 0x54,&DAT_0833eb14,0,uVar4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  if (sVar2 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
    if (*(byte *)(param_1 + 0x12) < 0x18) {
      *(undefined *)(param_1 + 0x12) = 0x18;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x1c) {
    uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = uVar4 | 1;
    }
    sub_080B0ACC(param_1 + 0x54,&DAT_0833eac0,0,uVar4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54) + -0x900;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54) + 0x900;
    }
    local_18 = *(int *)(param_1 + 0x58) + -0x400;
    sub_080AC60C(2,&local_1c);
  }
  else {
    if (bVar1 < 0x1d) {
      if (bVar1 != 0x18) goto LAB_0806f3e8;
      uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = uVar4 | 1;
      }
      sub_080B0ACC(param_1 + 0x54,&DAT_0833eaa4,0,uVar4);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_1c = *(int *)(param_1 + 0x54) + -0x1700;
      }
      else {
        local_1c = *(int *)(param_1 + 0x54) + 0x1700;
      }
      local_18 = *(int *)(param_1 + 0x58);
      iVar5 = -0x1300;
    }
    else {
      if (bVar1 != 0x20) {
        if (bVar1 == 0x24) {
          iVar5 = param_1 + 0x54;
          uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            uVar4 = uVar4 | 1;
          }
          sub_080B0ACC(iVar5,&DAT_0833eaf8,0,uVar4);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            local_1c = *(int *)(param_1 + 0x54) + -0x600;
          }
          else {
            local_1c = *(int *)(param_1 + 0x54) + 0x600;
          }
          local_18 = *(int *)(param_1 + 0x58) + -0x1c00;
          sub_080AC60C(2,&local_1c);
          sub_0801DD2C(4,iVar5);
          if (DAT_0202ebfc < 9999) {
            DAT_0202ebfc = DAT_0202ebfc + 1;
          }
          sub_0801DE2C(param_1,iVar5);
          *(undefined4 *)(param_1 + 0xc) = 4;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
          return in_lr;
        }
        goto LAB_0806f3e8;
      }
      uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = uVar4 | 1;
      }
      sub_080B0ACC(param_1 + 0x54,&DAT_0833eadc,0,uVar4);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_1c = *(int *)(param_1 + 0x54) + 0xa00;
      }
      else {
        local_1c = *(int *)(param_1 + 0x54) + -0xa00;
      }
      local_18 = *(int *)(param_1 + 0x58);
      iVar5 = -0xb00;
    }
    local_18 = local_18 + iVar5;
    sub_080AC60C(1,&local_1c);
    sub_080032EC(0x2a);
  }
LAB_0806f3e8:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

