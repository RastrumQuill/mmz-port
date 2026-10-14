// sub_0809B3D4 at 0x0809B3D4 (thumb)

undefined4 sub_0809B3D4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    switch(*(undefined *)(param_1 + 0xe)) {
    case 0:
      sub_08017700(param_1,0x4703);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined *)(param_1 + 0x12) = 0xb;
      *(undefined *)(param_1 + 0x13) = 4;
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202f608 = uVar6;
      iVar2 = sub_080FE4D8(uVar5 * 2 >> 0x11,0x50);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) + (iVar2 + -0x28) * 0x100;
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      iVar2 = sub_080FE4D8(uVar5 * 2 >> 0x11,0x50);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) + (iVar2 + -0x28) * 0x100;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 1:
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -0x3c000;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x3c000;
      }
      if ((*(char *)(param_1 + 0x12) == '\0') ||
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
      {
        *(undefined *)(param_1 + 0x12) = 0xb;
        if ((*(char *)(param_1 + 0x13) == '\0') ||
           (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0'
           )) {
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        else {
          uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
          uVar6 = uVar5 & 0x7fffffff;
          DAT_0202f608 = uVar6;
          iVar2 = sub_080FE4D8(uVar5 * 2 >> 0x11,0x50);
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) + (iVar2 + -0x28) * 0x100;
          uVar5 = uVar6 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar5 & 0x7fffffff;
          iVar2 = sub_080FE4D8(uVar5 * 2 >> 0x11,0x50);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) + (iVar2 + -0x28) * 0x100;
        }
      }
      else {
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) +
             ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54)) * 0x20 >> 8);
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + 0x58) +
             ((*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
      }
      sub_080177F4(param_1);
      break;
    case 2:
      *(undefined *)(param_1 + 0x12) = 7;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 3:
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
      }
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xe) = 5;
      }
      break;
    case 5:
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
      }
      sub_08017700(param_1,0x4703);
      iVar2 = DAT_0202f5c0;
      iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
      *(int *)(param_1 + 100) = iVar3;
      iVar2 = (*(int *)(param_1 + 0x58) + 0x3600) - *(int *)(iVar2 + 0x58);
      *(int *)(param_1 + 0x68) = iVar2;
      iVar3 = iVar3 >> 2;
      iVar2 = iVar2 >> 2;
      iVar2 = sub_080FE124(iVar3 * iVar3 + iVar2 * iVar2);
      uVar5 = (uint)(iVar2 << 0x10) >> 0xe;
      if (uVar5 == 0) {
        if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) {
          uVar4 = 0xffffff00;
        }
        else {
          uVar4 = 0x100;
        }
        *(undefined4 *)(param_1 + 100) = uVar4;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar4 = FUN_080fe2f8(*(int *)(param_1 + 100) << 8,uVar5);
        *(undefined4 *)(param_1 + 100) = uVar4;
        uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x68) << 8,uVar5);
        *(undefined4 *)(param_1 + 0x68) = uVar4;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x2c0 >> 8;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x2c0 >> 8;
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0x12) = 0x78;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      break;
    case 6:
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      }
    }
  }
  else {
    sub_080B2484(1,param_1 + 0x54);
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 3;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    iVar2 = sub_080C9120(&local_20,0,0x4707,uVar5);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    iVar2 = sub_080C9120(&local_20,0,0x4708,uVar5);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    iVar2 = sub_080C9120(&local_20,0,0x4709,uVar5);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    sub_0800471C(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809AD90(param_1);
  }
  return in_lr;
}

