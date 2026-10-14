// sub_080037B4 at 0x080037B4 (thumb)

undefined4 sub_080037B4(int param_1,byte param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar5 = (uint)param_2;
  iVar7 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar6 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ed6 + iVar7) =
       (&DAT_080ef450)[(uVar6 * 0xff ^ uVar5) + uVar6 + 0x40 & 0xff];
  uVar6 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002eee + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       (&DAT_080ef450)[(uVar6 * 0xff ^ uVar5) + uVar6 + 0x40 & 0xff];
  uVar6 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ede + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       (&DAT_080ef450)[(uVar6 * 0xff ^ uVar5) + uVar6 & 0xff];
  uVar6 = (uint)(*(byte *)(param_1 + 0x19) ^ *(byte *)(param_1 + 0x18));
  *(undefined2 *)(&DAT_03002ee6 + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       -(&DAT_080ef450)[(uVar6 * 0xff ^ uVar5) + uVar6 & 0xff];
  uVar3 = sub_080EF150((int)*(short *)(&DAT_03002ed6 + iVar7) << 8,0x101);
  *(ushort *)(&DAT_03002ed6 + iVar7) = uVar3;
  uVar4 = sub_080EF150((int)*(short *)(&DAT_03002ede + iVar7) << 8,0x101);
  *(ushort *)(&DAT_03002ede + iVar7) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x18);
  uVar2 = (ushort)((int)((uint)bVar1 << 0x1f) >> 0x1f);
  *(ushort *)(&DAT_03002ed6 + iVar7) = (uVar3 ^ uVar2) + (ushort)bVar1;
  *(ushort *)(&DAT_03002ede + iVar7) = (uVar2 ^ uVar4) + (ushort)bVar1;
  uVar3 = sub_080EF150((int)*(short *)(&DAT_03002ee6 + iVar7) << 8,0x101);
  *(ushort *)(&DAT_03002ee6 + iVar7) = uVar3;
  uVar4 = sub_080EF150((int)*(short *)(&DAT_03002eee + iVar7) << 8,0x101);
  *(ushort *)(&DAT_03002eee + iVar7) = uVar4;
  bVar1 = *(byte *)(param_1 + 0x19);
  uVar2 = (ushort)((int)((uint)bVar1 << 0x1f) >> 0x1f);
  *(ushort *)(&DAT_03002ee6 + iVar7) = (uVar3 ^ uVar2) + (ushort)bVar1;
  *(ushort *)(&DAT_03002eee + iVar7) = (uVar2 ^ uVar4) + (ushort)bVar1;
  *(byte *)(param_1 + 0x1b) = param_2;
  return in_lr;
}

