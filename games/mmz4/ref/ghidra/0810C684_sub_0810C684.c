// sub_0810C684 at 0x0810C684 (thumb)

undefined4 sub_0810C684(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  short *psVar10;
  undefined4 in_lr;
  char *local_24;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  if (*(char *)(param_1 + 0x11) != '\0') {
    puVar7 = (ushort *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(&DAT_0202e240 + (uint)(*puVar7 >> 8) * 2);
    *(char *)(param_1 + 0x7e) = (char)*(undefined2 *)(&DAT_0202dc40 + (uint)(*puVar7 >> 8) * 2);
    if (*(char *)(param_1 + 0x7f) == '\0') {
      iVar6 = (uint)(*puVar7 >> 8) * 2;
      *(undefined2 *)(&DAT_0202e240 + iVar6) = 0x200;
      *(undefined2 *)(&DAT_0202dc40 + iVar6) = 4;
    }
    else {
      uVar5 = (uint)*puVar7;
      if (uVar5 == 0xce00) {
        DAT_0202e3dc = 0x228;
        DAT_0202dddc = 5;
      }
      else if (uVar5 == 0xcf00) {
        DAT_0202e3de = 0x26c;
        DAT_0202ddde = 6;
      }
      else if (uVar5 == 0xd000) {
        DAT_0202e3e0 = 0x2dd;
        DAT_0202dde0 = 7;
      }
      else {
        iVar6 = ((uVar5 << 0x10) >> 0x18) * 2;
        *(undefined2 *)(&DAT_0202e240 + iVar6) = 0x290;
        *(undefined2 *)(&DAT_0202dc40 + iVar6) = 5;
      }
    }
    goto LAB_0810c8e2;
  }
  puVar7 = (ushort *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x7a) = (&DAT_0202e040)[*puVar7 >> 8];
  *(char *)(param_1 + 0x7e) = (char)(&DAT_0202de40)[*puVar7 >> 8];
  if (*(char *)(param_1 + 0x7f) == '\0') {
    uVar2 = *puVar7;
    (&DAT_0202e040)[uVar2 >> 8] = 0x200;
    (&DAT_0202de40)[uVar2 >> 8] = 4;
    uVar5 = (uint)(*puVar7 >> 8);
    sub_08001D30(&DAT_08c44000 + uVar5 * 5,
                 ((uint)(ushort)(&DAT_0202e040)[uVar5] -
                 (uint)((ushort)(&DAT_08c44006)[uVar5 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4400c + uVar5 * 0x14,
                 ((uint)(ushort)(&DAT_0202de40)[uVar5] - (uint)(byte)(&DAT_08c44013)[uVar5 * 0x14])
                 * 0x20 + 0x200);
    goto LAB_0810c8e2;
  }
  uVar5 = (uint)*puVar7;
  if (uVar5 == 0xf400) {
    iVar6 = 0x1e8;
    puVar8 = &DAT_0202e228;
    uVar3 = 0x250;
LAB_0810c81c:
    *puVar8 = uVar3;
    *(undefined2 *)((int)&DAT_0202de40 + iVar6) = 5;
  }
  else {
    if (uVar5 != 0xf500) {
      if (uVar5 == 0xf300) {
        iVar6 = 0x1e6;
        puVar8 = &DAT_0202e226;
        uVar3 = 0x2d2;
      }
      else {
        if (uVar5 != 0xf200) {
          uVar5 = (uVar5 << 0x10) >> 0x18;
          (&DAT_0202e040)[uVar5] = 0x280;
          (&DAT_0202de40)[uVar5] = 5;
          goto LAB_0810c83e;
        }
        iVar6 = 0x1e4;
        puVar8 = &DAT_0202e224;
        uVar3 = 0x2cb;
      }
      goto LAB_0810c81c;
    }
    DAT_0202e22a = 0x280;
    DAT_0202e02a = 6;
  }
LAB_0810c83e:
  uVar5 = (uint)(*puVar7 >> 8);
  sub_08001D30(&DAT_08c44000 + uVar5 * 5,
               ((uint)(ushort)(&DAT_0202e040)[uVar5] -
               (uint)((ushort)(&DAT_08c44006)[uVar5 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + uVar5 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[uVar5] - (uint)(byte)(&DAT_08c44013)[uVar5 * 0x14]) *
               0x20 + 0x200);
LAB_0810c8e2:
  local_24 = (char *)(param_1 + 0x7f);
  psVar10 = (short *)(param_1 + 0x78);
  sub_0801CC9C(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    sub_0801CEEC(param_1);
  }
  if ((*psVar10 == -0x3df2) &&
     (uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3, DAT_0202dc38 = uVar5 & 0x7fffffff,
     (uVar5 * 2 >> 0x11 & 0xff) == 0)) {
    *psVar10 = -0x3de5;
  }
  sub_0801CF00(param_1,*psVar10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801D3D0(param_1,*(byte *)(param_1 + 0x7d) + 4);
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar9 = (byte *)(param_1 + 0x4a);
  *pbVar9 = *pbVar9 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar9 = *pbVar9 & 0xdf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x7c) = 0;
  *(char *)(param_1 + 0x80) = '\0';
  if ((*local_24 == '\0') || (*(undefined *)(param_1 + 0x25) = 0x11, *local_24 == '\0')) {
    if (*(char *)(param_1 + 0x10) == '8') {
      sub_0810C608(uVar4,0x38,0,0xf300,*(undefined4 *)(param_1 + 0x54),
                   *(undefined4 *)(param_1 + 0x58),1);
    }
    if (*local_24 == '\0') {
      if (*(char *)(param_1 + 0x10) == ':') {
        sub_0810C608(uVar4,0x3a,0,0x9c00,*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),1);
      }
      if (*local_24 == '\0') {
        if (*(char *)(param_1 + 0x10) == 'C') {
          sub_0810C608(uVar4,0x43,0,0x2805,*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),1);
        }
        if (*local_24 == '\0') {
          if (*(char *)(param_1 + 0x10) == 'B') {
            sub_0810C608(uVar4,0x42,1,0xa400,*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),1);
          }
          if (*local_24 == '\0') {
            if (*(char *)(param_1 + 0x10) == 'G') {
              sub_0810C608(uVar4,0x47,1,0xce00,*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),1);
              sub_0810C608(uVar4,*(undefined *)(param_1 + 0x10),1,0xcf00,
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),2);
              sub_0810C608(uVar4,*(undefined *)(param_1 + 0x10),1,0xd000,
                           *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),3);
            }
            if (*local_24 == '\0') {
              if (*(char *)(param_1 + 0x10) == 'E') {
                sub_0810C608(uVar4,0x45,0,0xf200,*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x58),1);
              }
              if ((*local_24 == '\0') && (*(char *)(param_1 + 0x10) == 'K')) {
                sub_0810C608(uVar4,0x4b,0,0xf400,*(undefined4 *)(param_1 + 0x54),
                             *(undefined4 *)(param_1 + 0x58),1);
                sub_0810C608(uVar4,*(undefined *)(param_1 + 0x10),0,0xf500,
                             *(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000,2);
              }
            }
          }
        }
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 != '\0') {
    sub_0800249C(cVar1,(*(byte *)(param_1 + 0x7d) + 4) * 0x20 | 0x200);
  }
  sub_0810CB4C(param_1);
  return in_lr;
}

