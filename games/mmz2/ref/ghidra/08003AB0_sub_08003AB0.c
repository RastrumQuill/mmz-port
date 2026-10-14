// sub_08003AB0 at 0x08003AB0 (thumb)

undefined4 sub_08003AB0(int param_1,byte param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar6 = (uint)param_2;
  iVar5 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar7 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ed6 + iVar5) =
       (&DAT_080ef450)[(uVar7 * 0xff ^ uVar6) + uVar7 + 0x40 & 0xff];
  uVar7 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002eee + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       (&DAT_080ef450)[(uVar7 * 0xff ^ uVar6) + uVar7 + 0x40 & 0xff];
  uVar7 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ede + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       (&DAT_080ef450)[(uVar7 * 0xff ^ uVar6) + uVar7 & 0xff];
  uVar7 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ee6 + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       -(&DAT_080ef450)[(uVar7 * 0xff ^ uVar6) + uVar7 & 0xff];
  uVar6 = (uint)*(ushort *)(param_1 + 0x1c);
  if ((uVar6 - 1 | uVar6) + 1 == uVar6 * 2) {
    uVar6 = uVar6 + 1;
  }
  uVar3 = sub_080EF150((int)*(short *)(&DAT_03002ed6 + iVar5) << 8,uVar6);
  *(ushort *)(&DAT_03002ed6 + iVar5) = uVar3;
  uVar4 = sub_080EF150((int)*(short *)(&DAT_03002ede + iVar5) << 8,uVar6);
  *(ushort *)(&DAT_03002ede + iVar5) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x18);
  uVar2 = (ushort)((int)((uint)bVar1 << 0x1f) >> 0x1f);
  *(ushort *)(&DAT_03002ed6 + iVar5) = (uVar3 ^ uVar2) + (ushort)bVar1;
  *(ushort *)(&DAT_03002ede + iVar5) = (uVar2 ^ uVar4) + (ushort)bVar1;
  uVar6 = (uint)*(ushort *)(param_1 + 0x1e);
  if ((uVar6 - 1 | uVar6) + 1 == uVar6 * 2) {
    uVar6 = uVar6 + 1;
  }
  uVar3 = sub_080EF150((int)*(short *)(&DAT_03002ee6 + iVar5) << 8,uVar6);
  *(ushort *)(&DAT_03002ee6 + iVar5) = uVar3;
  uVar4 = sub_080EF150((int)*(short *)(&DAT_03002eee + iVar5) << 8,uVar6);
  *(ushort *)(&DAT_03002eee + iVar5) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x19);
  uVar2 = (ushort)((int)((uint)bVar1 << 0x1f) >> 0x1f);
  *(ushort *)(&DAT_03002ee6 + iVar5) = (uVar3 ^ uVar2) + (ushort)bVar1;
  *(ushort *)(&DAT_03002eee + iVar5) = (uVar2 ^ uVar4) + (ushort)bVar1;
  *(byte *)(param_1 + 0x1b) = param_2;
  return in_lr;
}

