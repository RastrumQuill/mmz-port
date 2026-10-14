// sub_0806EF08 at 0x0806EF08 (thumb)

undefined4 sub_0806EF08(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x1708);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 4) {
    uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = uVar2 | 1;
    }
    sub_080B0ACC(param_1 + 0x54,&DAT_0833eac0,0,uVar2);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54);
      iVar3 = -0x900;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54);
      iVar3 = 0x900;
    }
    local_1c = local_1c + iVar3;
    local_18 = *(int *)(param_1 + 0x58) + -0x400;
    sub_080AC60C(2,&local_1c);
  }
  else {
    if (bVar1 < 5) {
      if (bVar1 != 0) goto LAB_0806f130;
      uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar2 = uVar2 | 1;
      }
      sub_080B0ACC(param_1 + 0x54,&DAT_0833eaa4,0,uVar2);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_1c = *(int *)(param_1 + 0x54);
        iVar3 = -0x1700;
      }
      else {
        local_1c = *(int *)(param_1 + 0x54);
        iVar3 = 0x1700;
      }
      local_1c = local_1c + iVar3;
      local_18 = *(int *)(param_1 + 0x58);
      iVar3 = -0x1300;
    }
    else {
      if (bVar1 != 8) {
        if (bVar1 == 0xc) {
          iVar3 = param_1 + 0x54;
          uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            uVar2 = uVar2 | 1;
          }
          sub_080B0ACC(iVar3,&DAT_0833eaf8,0,uVar2);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            local_1c = *(int *)(param_1 + 0x54);
            iVar4 = -0x600;
          }
          else {
            local_1c = *(int *)(param_1 + 0x54);
            iVar4 = 0x600;
          }
          local_1c = local_1c + iVar4;
          local_18 = *(int *)(param_1 + 0x58) + -0x1c00;
          sub_080AC60C(2,&local_1c);
          sub_0801DD2C(4,iVar3);
          if (DAT_0202ebfc < 9999) {
            DAT_0202ebfc = DAT_0202ebfc + 1;
          }
          sub_0801DE2C(param_1,iVar3);
          *(undefined4 *)(param_1 + 0xc) = 4;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
          return in_lr;
        }
        goto LAB_0806f130;
      }
      uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar2 = uVar2 | 1;
      }
      sub_080B0ACC(param_1 + 0x54,&DAT_0833eadc,0,uVar2);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_1c = *(int *)(param_1 + 0x54);
        iVar3 = 0xa00;
      }
      else {
        local_1c = *(int *)(param_1 + 0x54);
        iVar3 = -0xa00;
      }
      local_1c = local_1c + iVar3;
      local_18 = *(int *)(param_1 + 0x58);
      iVar3 = -0xb00;
    }
    local_18 = local_18 + iVar3;
    sub_080AC60C(1,&local_1c);
    sub_080032EC(0x2a);
  }
LAB_0806f130:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

