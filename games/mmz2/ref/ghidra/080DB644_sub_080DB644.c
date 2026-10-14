// sub_080DB644 at 0x080DB644 (thumb)

undefined4 sub_080DB644(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  pbVar1 = (byte *)sub_080DB9A0();
  if (*pbVar1 < 2) {
    uVar2 = (uint)*(byte *)(param_1 + 0x12);
    iVar7 = *(int *)(pbVar1 + 0x10);
    uVar3 = sub_08037A60(iVar7);
    uVar6 = uVar2 + 1;
    if ((uVar3 & 0xff) < uVar6) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar4 = sub_08037AAC(iVar7,uVar6);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if ((uVar6 < (uVar3 & 0xff)) && (*(int *)(param_1 + 0x2c) == 0)) {
        sub_080DB898(pbVar1,param_1);
      }
      *(uint *)(param_1 + 0x54) = uVar2 * 0x1000 + 0x9400 + *(int *)(pbVar1 + 8);
      uVar3 = (uint)*(byte *)(iVar7 + 0x206 + (uVar4 & 0xff));
      if (uVar3 != 0) {
        iVar5 = sub_080EF2B8(uVar3,3);
        uVar3 = iVar5 + 1;
      }
      iVar7 = sub_08037ABC(iVar7,uVar2 + 1);
      if (iVar7 == 0) {
        sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bc5c + uVar3 * 2));
      }
      else {
        sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bc44 + uVar3 * 2));
      }
      sub_080128D4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DB7DC(param_1);
  }
  return in_lr;
}

