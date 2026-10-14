// sub_08046C0C at 0x08046C0C (thumb)

/* WARNING: Removing unreachable block (ram,0x08046d70) */

undefined4 sub_08046C0C(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x116);
        *(undefined *)(param_1 + 200) = 0;
        sub_080BC0C8(param_1,0);
        pcVar7 = (char *)(param_1 + 0xc6);
        if (*pcVar7 != '\0') {
          sub_08004230();
          *pcVar7 = '\0';
        }
        *(undefined *)(param_1 + 0x22) = 0;
        sub_08017700(param_1,0x3301);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar5 = sub_08017B8C(param_1);
          sub_080040A8(0x18,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
          *pcVar7 = '\x18';
          sub_080041E4();
          if (*pcVar7 != '\0') {
            sub_08004230();
            *pcVar7 = '\0';
          }
        }
        if (*(char *)(param_1 + 199) == '\0') {
          *(undefined4 *)(param_1 + 0x5c) = 0x33a;
          sVar2 = 0x61;
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffd1a;
          sVar2 = -0x8e;
        }
        iVar5 = sVar2 * 0x380;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x60) = -(iVar5 >> 8);
        *(undefined *)(param_1 + 0x12) = 10;
        *(undefined *)(param_1 + 0x13) = 0x1a;
        *(undefined4 *)(param_1 + 100) = 0x5a;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 100) + -1;
      *(int *)(param_1 + 100) = iVar5;
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (*(char *)(param_1 + 0x10) == '\0') {
        if ((*(char *)(param_1 + 0x12) != '\0') &&
           (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0'
           )) {
          sub_080BC12C(*(undefined4 *)(param_1 + 0xb4),*(int *)(param_1 + 0xb8) + -0x5000);
        }
        if ((*(char *)(param_1 + 0x13) != '\0') &&
           (cVar3 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar3, cVar3 == '\0'
           )) {
          iVar5 = 0;
          do {
            sub_0809F37C(*(undefined4 *)(param_1 + 0xb4),*(int *)(param_1 + 0xb8) + -0x5000,
                         (uint)(iVar5 << 0x1d) >> 0x18);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 8);
        }
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    pcVar7 = (char *)(param_1 + 0xc6);
    if (*pcVar7 != '\0') {
      sub_08004230();
      *pcVar7 = '\0';
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar5 = sub_08017B8C(param_1);
      sub_080040A8(0x15,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
      cVar3 = '\x15';
    }
    else {
      iVar5 = sub_08017B8C(param_1);
      sub_080040A8(0x10,(uint)(iVar5 << 0x18) >> 0x13 | 0x200);
      cVar3 = '\x10';
    }
    *pcVar7 = cVar3;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar6 = (byte *)(param_1 + 199);
  uVar4 = (ushort)*pbVar6 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
  *(ushort *)(param_1 + 0xc4) = uVar4;
  if (((uVar4 < 0xff80) && (*pbVar6 == 0)) || ((0x80 < uVar4 && (*pbVar6 == 1)))) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08045E14(param_1);
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

