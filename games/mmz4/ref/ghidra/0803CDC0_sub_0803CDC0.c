// sub_0803CDC0 at 0x0803CDC0 (thumb)

undefined4 sub_0803CDC0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar6 + 0xd) == '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        iVar5 = 0x18;
        iVar4 = 0x1800;
        do {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            local_24 = *(int *)(param_1 + 0x54) - iVar4;
          }
          else {
            local_24 = *(int *)(param_1 + 0x54) + iVar4;
          }
          local_20 = *(int *)(param_1 + 0x58) + -0xa00;
          sVar1 = sub_0804B9BC(local_24);
          if (sVar1 != 0) {
            sub_0804B434(iVar6,&local_24,0,0);
            sub_0804B434(iVar6,&local_24,0,1);
            *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
            break;
          }
          iVar4 = iVar4 + 0x600;
          iVar5 = iVar5 + 6;
        } while (iVar5 < 0x3d);
      }
      if (CONCAT11(*(undefined *)(iVar6 + 0x1e),*(undefined *)(iVar6 + 0x70)) != 0x1800) {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x6900) {
          sub_0801CF00(param_1,0x6901);
        }
        else {
          sub_0801CF00(param_1,0x6903);
        }
        sub_0801CFF0(param_1);
        sub_08005784(param_1 + 0x74,&DAT_088517e8);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      sub_0801CFF0(param_1);
      bVar3 = *(byte *)(param_1 + 0x12) >> 2;
      if (2 < bVar3) {
        bVar3 = 2;
      }
      sub_08005794(param_1 + 0x74,
                   **(undefined4 **)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),bVar3 + 1);
      return in_lr;
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

