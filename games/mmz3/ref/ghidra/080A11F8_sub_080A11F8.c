// sub_080A11F8 at 0x080A11F8 (thumb)

undefined4 sub_080A11F8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') {
        bVar2 = *(byte *)(param_1 + 0xe);
        if (bVar2 != 1) {
          if (1 < bVar2) {
            if (bVar2 == 2) {
              sub_08017700(param_1,0xaa01);
              *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
            }
            else if (bVar2 != 3) {
              return in_lr;
            }
            iVar4 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x68) * -0x100 >> 8);
            *(int *)(param_1 + 0x60) = iVar4;
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
            if (*(char *)(param_1 + 0x13) != '\0') {
              *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
            }
            sub_080177F4(param_1);
            return in_lr;
          }
          if (bVar2 != 0) {
            return in_lr;
          }
          *(undefined *)(param_1 + 0x12) = 0x78;
          sub_08017700(param_1,0xaa00);
          cVar1 = *(char *)(param_1 + 0xb6);
          if (cVar1 == '\0') {
            *(undefined *)(param_1 + 0x13) = 0x12;
            uVar3 = 0x4000;
          }
          else if (cVar1 == '\x01') {
            *(undefined *)(param_1 + 0x13) = 0x1a;
            uVar3 = 0x6000;
          }
          else if (cVar1 == '\x02') {
            *(undefined *)(param_1 + 0x13) = 0x22;
            uVar3 = 0x8000;
          }
          else {
            *(undefined *)(param_1 + 0x13) = 0x2a;
            uVar3 = 0xa000;
          }
          *(undefined4 *)(param_1 + 100) = uVar3;
          bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
          if ((bVar2 & 0x10) == 0) {
            iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
            *(byte *)(param_1 + 0x4c) = bVar2 & 0x10;
            bVar2 = *(byte *)(param_1 + 0x4a) & 0xef;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
            *(undefined *)(param_1 + 0x4c) = 1;
            bVar2 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
          }
          *(byte *)(param_1 + 0x4a) = bVar2;
          uVar3 = FUN_080fe2f8(iVar4 - *(int *)(param_1 + 0x54),*(undefined *)(param_1 + 0x13));
          *(undefined4 *)(param_1 + 0x5c) = uVar3;
          cVar1 = *(char *)(param_1 + 0xb6);
          uVar5 = (uint)*(byte *)(param_1 + 0x13);
          if (cVar1 == '\0') {
            uVar3 = 0x4c;
          }
          else if (cVar1 == '\x01') {
            uVar3 = 0x38;
          }
          else if (cVar1 == '\x02') {
            uVar3 = 0x26;
          }
          else {
            uVar3 = 0x14;
          }
          *(undefined4 *)(param_1 + 0x68) = uVar3;
          iVar4 = uVar5 * ((int)(uVar5 + 1) >> 1) * ((*(int *)(param_1 + 0x68) << 8) >> 8);
          cVar1 = *(char *)(param_1 + 0xb5);
          if (cVar1 == '\0') {
            iVar4 = FUN_080fe2f8(iVar4,uVar5);
            iVar4 = iVar4 * 0x130;
          }
          else if (cVar1 == '\x01') {
            iVar4 = FUN_080fe2f8(iVar4,uVar5);
            iVar4 = iVar4 * 0x170;
          }
          else if (cVar1 == '\x02') {
            iVar4 = FUN_080fe2f8(iVar4,uVar5);
            iVar4 = iVar4 * 0x1d0;
          }
          else {
            iVar4 = FUN_080fe2f8(iVar4,uVar5);
            iVar4 = iVar4 * 0x260;
          }
          *(int *)(param_1 + 0x60) = iVar4 >> 8;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        iVar4 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x68) * -0x100 >> 8);
        *(int *)(param_1 + 0x60) = iVar4;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
        if (*(char *)(param_1 + 0x13) != '\0') {
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
        }
        sub_080177F4(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
    }
    else {
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(2,&local_18);
      sub_080BD898(&local_18,0,0xaa02,uVar5);
      sub_080BD898(&local_18,1,0xaa02,uVar5);
      sub_0800471C(0x2a);
    }
  }
  else {
    sub_080B2484(2,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

