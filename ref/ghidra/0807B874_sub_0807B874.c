// sub_0807B874 at 0x0807B874 (thumb)

undefined4 sub_0807B874(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,*(undefined *)(param_1 + 0x11));
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  pbVar6 = (byte *)0x0;
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  pbVar5 = (byte *)(iVar7 + 0xe4);
  if (*pbVar5 == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    uVar3 = *pbVar5 - 1;
    *pbVar5 = (byte)uVar3;
    if ((int)(uVar3 * 0x1000000) >> 0x18 < 0x20) {
      if ((uVar3 & 3) < 2) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (((*(uint *)(iVar7 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar7 + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
    pbVar6 = (byte *)(param_1 + 0x41);
    *pbVar6 = *pbVar6 & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  bVar2 = *(byte *)(iVar7 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_0807B5DC(param_1,2,(uint)*(byte *)(param_1 + 9),pbVar6);
  }
  return in_lr;
}

