// sub_080965B4 at 0x080965B4 (thumb)

undefined4 sub_080965B4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && ((DAT_0202e918 & 8) == 0)) &&
     ((DAT_0202e922 & 1) != 0)) goto LAB_080968d0;
  uVar3 = 0xf;
  pbVar7 = (byte *)(param_1 + 0xb4);
  do {
    pbVar7[uVar3] = pbVar7[uVar3 - 1];
    uVar3 = uVar3 - 1 & 0xff;
  } while (uVar3 != 0);
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar6 = *(int *)(param_1 + 0x28);
    if ((*(int *)(iVar6 + 0x60) == 0) && (2 < *(byte *)(iVar6 + 0xc))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (*(byte *)(iVar6 + 0xc) < 2) {
      iVar2 = *(int *)(iVar6 + 0x2c);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885d3e8);
        goto LAB_080968d0;
      }
      sub_08005784(param_1 + 0x74,&DAT_0885d3d0);
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar6 + 100);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (1 < *(byte *)(iVar6 + 0xd)) {
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar6 + 0x5c);
        *(undefined *)(param_1 + 0xd) = 2;
      }
      if ((*(byte *)(iVar6 + 0x70) & 1) == 0) {
        sub_0801CF00(param_1,0x4402);
      }
      else {
        sub_0801CF00(param_1,0x4403);
      }
      if (*(byte *)(iVar6 + 0xc) < 2) {
        if (*(char *)(iVar6 + 0x12) == '\x10') {
          if (*(int *)(param_1 + 100) < 400) {
            bVar1 = *(byte *)(iVar6 + 0xc3);
            *pbVar7 = bVar1;
            *(int *)(param_1 + 0x54) =
                 *(int *)(param_1 + 0x54) +
                 (*(short *)((int)&DAT_08128c10 + ((bVar1 + 0xc0) * 0x1000000 >> 0x17)) * 3 >> 2);
            *(int *)(param_1 + 0x58) =
                 *(int *)(param_1 + 0x58) +
                 (*(short *)((int)&DAT_08128c10 + ((*pbVar7 + 0x80) * 0x1000000 >> 0x17)) * 3 >> 2);
          }
          if (*(byte *)(param_1 + 0x12) < 0x10) {
            *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
          }
        }
        goto LAB_08096a50;
      }
      *(char *)(param_1 + 0x13) = *(char *)(iVar6 + 0x13) + '\x04';
    }
    else {
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        sub_0801CF00(param_1,0x4402);
      }
      else {
        sub_0801CF00(param_1,0x4403);
      }
      if (((uint)*(byte *)(param_1 + 0x11) + *(int *)(param_1 + 0x5c) & 1) == 0) {
        iVar6 = *(int *)(param_1 + 0x54) + -0x280;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x54) + 0x280;
      }
      *(int *)(param_1 + 0x54) = iVar6;
      if ((*(byte *)(param_1 + 0x11) - 1 & 3) < 2) {
        iVar6 = *(int *)(param_1 + 0x58) + -0x280;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x58) + 0x280;
      }
      *(int *)(param_1 + 0x58) = iVar6;
      uVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (((uVar3 & 0xf) == 0) &&
         (bVar1 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar1 + 1, bVar1 < 0xb5))
      goto LAB_08096a50;
LAB_08096a26:
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
LAB_08096a3e:
    sub_08096A5C(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    sub_08006984(0xb);
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0801CFF0(param_1);
    goto LAB_08096a3e;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08096668:
      if (*(int *)(param_1 + 0x2c) != 0) goto LAB_0809666e;
    }
    else {
      iVar6 = sub_0802AD94(0,param_1,&DAT_0885d400);
      *(int *)(param_1 + 0x2c) = iVar6;
      if (iVar6 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885d3b8);
        goto LAB_08096668;
      }
    }
  }
  else {
LAB_0809666e:
    iVar6 = sub_0802B3CC();
    if (iVar6 == 0) {
      sub_0801CFC8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)),
                   (short)*(char *)(param_1 + 0x71),4);
LAB_080968d0:
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885d3a0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar6 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (iVar6 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    goto LAB_08096a50;
  }
  if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_08096a26;
  iVar6 = *(int *)(param_1 + 100);
  if (iVar6 < 0x1a4) {
    if (iVar6 < 400) {
      if (0x135 < iVar6) {
        if ((iVar6 - 0xf8U & 7) < 2) {
          sub_0801CFC8(param_1,0x4401,(short)*(char *)(param_1 + 0x71),
                       (short)*(char *)(param_1 + 0x72));
        }
        else {
          sub_0801CFC8(param_1,0x4400,(short)*(char *)(param_1 + 0x71),
                       (short)*(char *)(param_1 + 0x72));
        }
      }
    }
    else {
      if ((iVar6 - 400U & 3) < 2) {
        uVar4 = 0x4401;
      }
      else {
        uVar4 = 0x4400;
      }
      sub_0801CF00(param_1,uVar4);
    }
  }
  else {
    sub_0801CF00(param_1,0x4401);
    if ((byte)(*pbVar7 + 0xbf) < 0x7f) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 100) - 0x79U < 0x7f) {
    bVar1 = (char)*(undefined4 *)(param_1 + 0x68) * '\x02' + *pbVar7;
LAB_0809680c:
    *pbVar7 = bVar1;
  }
  else {
    iVar6 = sub_081284E0((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(param_1 + 0x58) + 0x2000) - *(int *)(DAT_0202dbf0 + 0x58)) *
                         0x100 >> 0x10);
    uVar5 = (uint)(iVar6 << 0x10) >> 0x18;
    uVar3 = (uint)*pbVar7;
    if (uVar5 != uVar3) {
      if (iVar6 << 0x10 < 0) {
        if ((uVar3 < uVar5) && ((int)(uVar5 - 0x80) < (int)uVar3)) {
          bVar1 = *pbVar7 + 1;
        }
        else {
          bVar1 = *pbVar7 - 1;
        }
      }
      else if ((uVar5 < uVar3) && ((uint)*pbVar7 < uVar5 + 0x80)) {
        bVar1 = *pbVar7 - 1;
      }
      else {
        bVar1 = *pbVar7 + 1;
      }
      goto LAB_0809680c;
    }
  }
  if (*(int *)(param_1 + 100) < 400) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (*(short *)((int)&DAT_08128c10 + ((*pbVar7 + 0xc0) * 0x1000000 >> 0x17)) * 3 >> 2);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (*(short *)((int)&DAT_08128c10 + ((*pbVar7 + 0x80) * 0x1000000 >> 0x17)) * 3 >> 2);
    *(byte *)(param_1 + 0x24) = *pbVar7;
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
LAB_08096a50:
  sub_0801CFF0(param_1);
  return in_lr;
}

