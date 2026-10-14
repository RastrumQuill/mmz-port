// sub_08085538 at 0x08085538 (thumb)

undefined4 sub_08085538(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((DAT_02030108 & 0x40) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_24 = *(int *)(param_1 + 0x5c);
          iVar3 = -0x800;
        }
        else {
          local_24 = *(int *)(param_1 + 0x5c);
          iVar3 = 0x800;
        }
        local_24 = local_24 + iVar3;
        local_20 = *(undefined4 *)(param_1 + 0x60);
        sub_080B2484(1,&local_24);
        uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar5 & 0x7fffffff;
        uVar5 = uVar5 * 2 >> 0x11 & 3;
        local_1c = *(undefined4 *)(param_1 + 0x54);
        local_18 = *(undefined4 *)(param_1 + 0x58);
        puVar6 = (undefined *)(param_1 + 0xb8);
        sub_080C2678(&local_1c,*puVar6,0x6803,uVar5);
        sub_080C2678(&local_1c,*puVar6,0x6804,uVar5);
        sub_080C2678(&local_1c,*puVar6,0x6805,uVar5);
        sub_0800471C(0x2a);
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(param_1 + 0x54);
          iVar4 = -0xc00;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x54);
          iVar4 = 0xc00;
        }
        *(int *)(param_1 + 0x54) = iVar3 + iVar4;
        sub_08024FE4(3,param_1 + 0x54);
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
        sub_080250C4(param_1,param_1 + 0x54);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
        goto LAB_080856b4;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_080856b4:
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return in_lr;
}

